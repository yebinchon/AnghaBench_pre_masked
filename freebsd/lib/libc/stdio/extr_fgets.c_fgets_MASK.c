
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t _r; unsigned char* _p; int _flags; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 unsigned char* FUNC_5 (void*,char,size_t) ;
 int FUNC_6 (void*,void*,size_t) ;

char *
FUNC_7(char * __restrict VAR_3, int VAR_4, FILE * __restrict VAR_5)
{
 size_t VAR_6;
 char *VAR_7, *VAR_8;
 unsigned char *VAR_9, *VAR_10;

 FUNC_0(VAR_5);
 FUNC_2(VAR_5, -1);

 if (VAR_4 <= 0) {
  VAR_5->_flags |= VAR_1;
  VAR_2 = VAR_0;
  VAR_8 = ((void*)0);
  goto end;
 }

 VAR_7 = VAR_3;
 VAR_4--;
 while (VAR_4 != 0) {



  if ((VAR_6 = VAR_5->_r) <= 0) {
   if (FUNC_4(VAR_5)) {

    if (!FUNC_3(VAR_5) || VAR_7 == VAR_3) {
     VAR_8 = ((void*)0);
     goto end;
    }
    break;
   }
   VAR_6 = VAR_5->_r;
  }
  VAR_9 = VAR_5->_p;







  if (VAR_6 > VAR_4)
   VAR_6 = VAR_4;
  VAR_10 = FUNC_5((void *)VAR_9, '\n', VAR_6);
  if (VAR_10 != ((void*)0)) {
   VAR_6 = ++VAR_10 - VAR_9;
   VAR_5->_r -= VAR_6;
   VAR_5->_p = VAR_10;
   (void)FUNC_6((void *)VAR_7, (void *)VAR_9, VAR_6);
   VAR_7[VAR_6] = 0;
   VAR_8 = VAR_3;
   goto end;
  }
  VAR_5->_r -= VAR_6;
  VAR_5->_p += VAR_6;
  (void)FUNC_6((void *)VAR_7, (void *)VAR_9, VAR_6);
  VAR_7 += VAR_6;
  VAR_4 -= VAR_6;
 }
 *VAR_7 = 0;
 VAR_8 = VAR_3;
end:
 FUNC_1();
 return (VAR_8);
}
