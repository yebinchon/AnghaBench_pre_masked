
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int _flags; int _file; int _close; int _seek; int _write; int _read; struct TYPE_4__* _cookie; int _flags2; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char const*,int*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_17 ;

FILE *
FUNC_3(int VAR_18, const char *VAR_19)
{
 FILE *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 if (VAR_18 > VAR_10) {
  VAR_17 = VAR_1;
  return (((void*)0));
 }

 if ((VAR_21 = FUNC_0(VAR_19, &VAR_22)) == 0)
  return (((void*)0));


 if ((VAR_23 = FUNC_2(VAR_18, VAR_3, 0)) < 0)
  return (((void*)0));

 VAR_24 = VAR_23 & (VAR_5 | VAR_8);
 if (VAR_24 != VAR_9 && (VAR_24 != (VAR_22 & VAR_5))) {
  VAR_17 = VAR_0;
  return (((void*)0));
 }

 if ((VAR_20 = FUNC_1()) == ((void*)0))
  return (((void*)0));

 if ((VAR_22 & VAR_7) && FUNC_2(VAR_18, VAR_4, VAR_2) == -1) {
  VAR_20->_flags = 0;
  return (((void*)0));
 }

 VAR_20->_flags = VAR_21;





 if (VAR_23 & VAR_6)
  VAR_20->_flags2 |= VAR_11;
 else if (VAR_22 & VAR_6)
  VAR_20->_flags |= VAR_12;
 VAR_20->_file = VAR_18;
 VAR_20->_cookie = VAR_20;
 VAR_20->_read = VAR_14;
 VAR_20->_write = VAR_16;
 VAR_20->_seek = VAR_15;
 VAR_20->_close = VAR_13;
 return (VAR_20);
}
