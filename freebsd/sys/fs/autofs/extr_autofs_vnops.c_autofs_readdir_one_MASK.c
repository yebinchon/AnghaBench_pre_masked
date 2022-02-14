
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {size_t uio_resid; } ;
struct dirent {int d_fileno; size_t d_reclen; size_t d_namlen; int d_name; int d_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (struct dirent*) ;
 int FUNC_2 (int ,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (struct dirent*,size_t,struct uio*) ;

__attribute__((used)) static int
FUNC_5(struct uio *VAR_2, const char *VAR_3, int VAR_4,
    size_t *VAR_5)
{
 struct dirent VAR_6;
 size_t VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(VAR_3);
 VAR_8 = FUNC_0(VAR_7);
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_8;

 if (VAR_2 == ((void*)0))
  return (0);

 if (VAR_2->uio_resid < VAR_8)
  return (VAR_1);

 VAR_6.d_fileno = VAR_4;
 VAR_6.d_reclen = VAR_8;
 VAR_6.d_type = VAR_0;
 VAR_6.d_namlen = VAR_7;
 FUNC_2(VAR_6.d_name, VAR_3, VAR_7);
 FUNC_1(&VAR_6);
 VAR_9 = FUNC_4(&VAR_6, VAR_8, VAR_2);

 return (VAR_9);
}
