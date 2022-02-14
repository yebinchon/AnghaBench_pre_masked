
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int iov_len; void* iov_base; } ;


 struct iovec* FUNC_0 (struct iovec*,int) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (void*) ;

void
FUNC_3(struct iovec **VAR_0, int *VAR_1, const char *VAR_2, void *VAR_3,
     size_t VAR_4)
{
 int VAR_5;

 if (*VAR_1 < 0)
  return;
 VAR_5 = *VAR_1;
 *VAR_0 = FUNC_0(*VAR_0, sizeof **VAR_0 * (VAR_5 + 2));
 if (*VAR_0 == ((void*)0)) {
  *VAR_1 = -1;
  return;
 }
 (*VAR_0)[VAR_5].iov_base = FUNC_1(VAR_2);
 (*VAR_0)[VAR_5].iov_len = FUNC_2(VAR_2) + 1;
 VAR_5++;
 (*VAR_0)[VAR_5].iov_base = VAR_3;
 if (VAR_4 == (size_t)-1) {
  if (VAR_3 != ((void*)0))
   VAR_4 = FUNC_2(VAR_3) + 1;
  else
   VAR_4 = 0;
 }
 (*VAR_0)[VAR_5].iov_len = (int)VAR_4;
 *VAR_1 = ++VAR_5;
}
