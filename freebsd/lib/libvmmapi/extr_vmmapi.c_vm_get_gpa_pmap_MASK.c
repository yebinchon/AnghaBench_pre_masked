
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int fd; } ;
struct vm_gpa_pte {int ptenum; int * pte; int gpa; } ;
typedef int gpapte ;


 int VAR_0 ;
 int FUNC_0 (struct vm_gpa_pte*,int) ;
 int FUNC_1 (int ,int ,struct vm_gpa_pte*) ;

int
FUNC_2(struct vmctx *VAR_1, uint64_t VAR_2, uint64_t *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6;
 struct vm_gpa_pte VAR_7;

 FUNC_0(&VAR_7, sizeof(VAR_7));
 VAR_7.gpa = VAR_2;

 VAR_5 = FUNC_1(VAR_1->fd, VAR_0, &VAR_7);

 if (VAR_5 == 0) {
  *VAR_4 = VAR_7.ptenum;
  for (VAR_6 = 0; VAR_6 < VAR_7.ptenum; VAR_6++)
   VAR_3[VAR_6] = VAR_7.pte[VAR_6];
 }

 return (VAR_5);
}
