
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbnambuf {int nb_len; int * nb_buf; } ;
struct dirent {char* d_name; size_t d_namlen; } ;


 int FUNC_0 (struct mbnambuf*) ;
 int FUNC_1 (char*,int *,int) ;

char *
FUNC_2(struct mbnambuf *VAR_0, struct dirent *VAR_1)
{

 if (VAR_0->nb_len > sizeof(VAR_1->d_name) - 1) {
  FUNC_0(VAR_0);
  return (((void*)0));
 }
 FUNC_1(VAR_1->d_name, &VAR_0->nb_buf[0], VAR_0->nb_len);
 VAR_1->d_name[VAR_0->nb_len] = '\0';
 VAR_1->d_namlen = VAR_0->nb_len;

 FUNC_0(VAR_0);
 return (VAR_1->d_name);
}
