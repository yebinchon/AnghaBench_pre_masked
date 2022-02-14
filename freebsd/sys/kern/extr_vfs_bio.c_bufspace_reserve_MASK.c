
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufdomain {long bd_maxbufspace; long bd_hibufspace; long bd_bufspacethresh; int bd_bufspace; } ;


 int VAR_0 ;
 long FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct bufdomain*) ;

__attribute__((used)) static int
FUNC_3(struct bufdomain *VAR_1, int VAR_2, bool VAR_3)
{
 long VAR_4, VAR_5;
 long VAR_6;

 if (VAR_3)
  VAR_4 = VAR_1->bd_maxbufspace;
 else
  VAR_4 = VAR_1->bd_hibufspace;
 VAR_6 = FUNC_0(&VAR_1->bd_bufspace, VAR_2);
 VAR_5 = VAR_6 + VAR_2;
 if (VAR_5 > VAR_4) {
  FUNC_1(&VAR_1->bd_bufspace, VAR_2);
  return (VAR_0);
 }


 if (VAR_6 < VAR_1->bd_bufspacethresh && VAR_5 >= VAR_1->bd_bufspacethresh)
  FUNC_2(VAR_1);

 return (0);
}
