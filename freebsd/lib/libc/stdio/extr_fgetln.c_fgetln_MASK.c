
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ _base; } ;
struct TYPE_10__ {size_t _r; unsigned char* _p; int _flags; TYPE_1__ _lb; } ;
typedef TYPE_2__ FILE ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 size_t VAR_0 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 unsigned char* FUNC_6 (void*,char,size_t) ;
 int FUNC_7 (void*,void*,size_t) ;

char *
FUNC_8(FILE *VAR_3, size_t *VAR_4)
{
 unsigned char *VAR_5;
 char *VAR_6;
 size_t VAR_7;
 size_t VAR_8;

 FUNC_0(VAR_3);
 FUNC_2(VAR_3, -1);

 if (VAR_3->_r <= 0 && FUNC_5(VAR_3)) {
  *VAR_4 = 0;
  VAR_6 = ((void*)0);
  goto end;
 }


 if ((VAR_5 = FUNC_6((void *)VAR_3->_p, '\n', (size_t)VAR_3->_r)) != ((void*)0)) {





  VAR_5++;
  VAR_6 = (char *)VAR_3->_p;
  *VAR_4 = VAR_7 = VAR_5 - VAR_3->_p;
  VAR_3->_flags |= VAR_2;
  VAR_3->_r -= VAR_7;
  VAR_3->_p = VAR_5;
  goto end;
 }
 for (VAR_7 = VAR_3->_r, VAR_8 = 0;; VAR_7 += VAR_3->_r) {
  size_t VAR_9;






  if (FUNC_4(VAR_3, VAR_7 + 80))
   goto error;
  (void)FUNC_7((void *)(VAR_3->_lb._base + VAR_8), (void *)VAR_3->_p,
      VAR_7 - VAR_8);
  VAR_8 = VAR_7;
  if (FUNC_5(VAR_3)) {
   if (FUNC_3(VAR_3))
    break;
   goto error;
  }
  if ((VAR_5 = FUNC_6((void *)VAR_3->_p, '\n', (size_t)VAR_3->_r)) == ((void*)0))
   continue;


  VAR_5++;
  VAR_9 = VAR_5 - VAR_3->_p;
  VAR_7 += VAR_9;
  if (FUNC_4(VAR_3, VAR_7))
   goto error;
  (void)FUNC_7((void *)(VAR_3->_lb._base + VAR_8), (void *)VAR_3->_p,
      VAR_9);
  VAR_3->_r -= VAR_9;
  VAR_3->_p = VAR_5;
  break;
 }
 *VAR_4 = VAR_7;
 VAR_6 = (char *)VAR_3->_lb._base;
end:
 FUNC_1();
 return (VAR_6);

error:
 *VAR_4 = 0;
 VAR_3->_flags |= VAR_1;
 VAR_6 = ((void*)0);
 goto end;
}
