
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_option {char* value; struct mtree_option* next; } ;
struct archive_read {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct mtree_option*) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_3, struct mtree_option **VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct mtree_option *VAR_7;

 if ((VAR_7 = FUNC_2(sizeof(*VAR_7))) == ((void*)0)) {
  FUNC_0(&VAR_3->archive, VAR_2, "Can't allocate memory");
  return (VAR_0);
 }
 if ((VAR_7->value = FUNC_2(VAR_6 + 1)) == ((void*)0)) {
  FUNC_1(VAR_7);
  FUNC_0(&VAR_3->archive, VAR_2, "Can't allocate memory");
  return (VAR_0);
 }
 FUNC_3(VAR_7->value, VAR_5, VAR_6);
 VAR_7->value[VAR_6] = '\0';
 VAR_7->next = *VAR_4;
 *VAR_4 = VAR_7;
 return (VAR_1);
}
