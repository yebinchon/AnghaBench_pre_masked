
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned char* _base; int _size; } ;
struct TYPE_10__ {size_t _r; size_t _lbfsize; int _flags; size_t _w; unsigned char* _p; unsigned char* _nbuf; TYPE_1__ _bf; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
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
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,size_t*,int*) ;
 int VAR_13 ;
 int FUNC_6 (void*) ;
 char* FUNC_7 (size_t) ;

int
FUNC_8(FILE * __restrict VAR_14, char * __restrict VAR_15, int VAR_16, size_t VAR_17)
{
 int VAR_18, VAR_19;
 size_t VAR_20;
 int VAR_21;






 if (VAR_16 != VAR_3)
  if ((VAR_16 != VAR_1 && VAR_16 != VAR_2) || (int)VAR_17 < 0)
   return (VAR_0);

 FUNC_0(VAR_14);






 VAR_18 = 0;
 (void)FUNC_4(VAR_14);
 if (FUNC_3(VAR_14))
  FUNC_1(VAR_14);
 VAR_14->_r = VAR_14->_lbfsize = 0;
 VAR_19 = VAR_14->_flags;
 if (VAR_19 & VAR_6)
  FUNC_6((void *)VAR_14->_bf._base);
 VAR_19 &= ~(VAR_5 | VAR_7 | VAR_6 | VAR_10 | VAR_9 | VAR_8 | VAR_4);


 if (VAR_16 == VAR_3)
  goto nbf;






 VAR_19 |= FUNC_5(VAR_14, &VAR_20, &VAR_21);
 if (VAR_17 == 0) {
  VAR_15 = ((void*)0);
  VAR_17 = VAR_20;
 }


 if (VAR_15 == ((void*)0)) {
  if ((VAR_15 = FUNC_7(VAR_17)) == ((void*)0)) {




   VAR_18 = VAR_0;
   if (VAR_17 != VAR_20) {
    VAR_17 = VAR_20;
    VAR_15 = FUNC_7(VAR_17);
   }
  }
  if (VAR_15 == ((void*)0)) {

nbf:
   VAR_14->_flags = VAR_19 | VAR_7;
   VAR_14->_w = 0;
   VAR_14->_bf._base = VAR_14->_p = VAR_14->_nbuf;
   VAR_14->_bf._size = 1;
   goto end;
  }
  VAR_19 |= VAR_6;
 }







 if (VAR_17 != VAR_20)
  VAR_19 |= VAR_8;





 if (VAR_16 == VAR_2)
  VAR_19 |= VAR_5;
 VAR_14->_flags = VAR_19;
 VAR_14->_bf._base = VAR_14->_p = (unsigned char *)VAR_15;
 VAR_14->_bf._size = VAR_17;

 if (VAR_19 & VAR_11) {




  if (VAR_19 & VAR_5) {
   VAR_14->_w = 0;
   VAR_14->_lbfsize = -VAR_14->_bf._size;
  } else
   VAR_14->_w = VAR_17;
 } else {

  VAR_14->_w = 0;
 }
 VAR_12 = VAR_13;

end:
 FUNC_2();
 return (VAR_18);
}
