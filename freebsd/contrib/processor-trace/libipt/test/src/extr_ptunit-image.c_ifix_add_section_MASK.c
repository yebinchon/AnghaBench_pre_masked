
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_fixture {int nsecs; int * mapping; int * status; int * section; } ;


 int FUNC_0 (int *,char*,int *,int *,struct image_fixture*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct image_fixture *VAR_2, char *VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return -VAR_1;

 VAR_4 = VAR_2->nsecs;
 if (VAR_0 <= VAR_4)
  return -VAR_1;

 FUNC_0(&VAR_2->section[VAR_4], VAR_3, &VAR_2->status[VAR_4],
     &VAR_2->mapping[VAR_4], VAR_2);

 VAR_2->nsecs += 1;
 return VAR_4;
}
