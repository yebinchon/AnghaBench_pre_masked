
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ssize_t ;
struct TYPE_7__ {scalar_t__ _r; int _flags; int * _p; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char**,int,size_t*) ;
 int * FUNC_6 (int *,int,scalar_t__) ;
 scalar_t__ FUNC_7 (char**,size_t*,size_t*,int *,int) ;

ssize_t
FUNC_8(char ** __restrict VAR_3, size_t * __restrict VAR_4, int VAR_5,
  FILE * __restrict VAR_6)
{
 u_char *VAR_7;
 size_t VAR_8;

 FUNC_0(VAR_6);
 FUNC_2(VAR_6, -1);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  VAR_2 = VAR_0;
  goto error;
 }

 if (*VAR_3 == ((void*)0))
  *VAR_4 = 0;

 if (VAR_6->_r <= 0 && FUNC_4(VAR_6)) {

  if (!FUNC_3(VAR_6) || FUNC_5(VAR_3, 1, VAR_4))
   goto error;
  (*VAR_3)[0] = '\0';
  VAR_8 = -1;
  goto end;
 }

 VAR_8 = 0;
 while ((VAR_7 = FUNC_6(VAR_6->_p, VAR_5, VAR_6->_r)) == ((void*)0)) {
  if (FUNC_7(VAR_3, &VAR_8, VAR_4, VAR_6->_p, VAR_6->_r))
   goto error;
  if (FUNC_4(VAR_6)) {
   if (!FUNC_3(VAR_6))
    goto error;
   goto done;
  }
 }
 VAR_7++;
 if (FUNC_7(VAR_3, &VAR_8, VAR_4, VAR_6->_p, VAR_7 - VAR_6->_p))
  goto error;
 VAR_6->_r -= VAR_7 - VAR_6->_p;
 VAR_6->_p = VAR_7;
done:

 (*VAR_3)[VAR_8] = '\0';
end:
 FUNC_1();
 return (VAR_8);

error:
 VAR_6->_flags |= VAR_1;
 VAR_8 = -1;
 goto end;
}
