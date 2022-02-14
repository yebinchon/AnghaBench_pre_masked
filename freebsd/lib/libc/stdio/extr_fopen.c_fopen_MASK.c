
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int fpos_t ;
struct TYPE_5__ {int _flags; int _file; int _flags2; int _close; int _seek; int _write; int _read; struct TYPE_5__* _cookie; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,int*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int VAR_10 ;

FILE *
FUNC_5(const char * __restrict VAR_11, const char * __restrict VAR_12)
{
 FILE *VAR_13;
 int VAR_14;
 int VAR_15, VAR_16;

 if ((VAR_15 = FUNC_0(VAR_12, &VAR_16)) == 0)
  return (((void*)0));
 if ((VAR_13 = FUNC_1()) == ((void*)0))
  return (((void*)0));
 if ((VAR_14 = FUNC_3(VAR_11, VAR_16, VAR_0)) < 0) {
  VAR_13->_flags = 0;
  return (((void*)0));
 }







 if (VAR_14 > VAR_4) {
  VAR_13->_flags = 0;
  FUNC_2(VAR_14);
  VAR_10 = VAR_1;
  return (((void*)0));
 }
 VAR_13->_file = VAR_14;
 VAR_13->_flags = VAR_15;
 VAR_13->_cookie = VAR_13;
 VAR_13->_read = VAR_7;
 VAR_13->_write = VAR_9;
 VAR_13->_seek = VAR_8;
 VAR_13->_close = VAR_6;
 if (VAR_16 & VAR_2) {
  VAR_13->_flags2 |= VAR_5;
  (void)FUNC_4(VAR_13, (fpos_t)0, VAR_3);
 }
 return (VAR_13);
}
