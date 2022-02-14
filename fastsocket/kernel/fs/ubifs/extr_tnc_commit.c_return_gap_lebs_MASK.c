
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int* gap_lebs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct ubifs_info*,int,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ubifs_info *VAR_2)
{
 int *VAR_3, VAR_4;

 if (!VAR_2->gap_lebs)
  return 0;

 FUNC_0("");
 for (VAR_3 = VAR_2->gap_lebs; *VAR_3 != -1; VAR_3++) {
  VAR_4 = FUNC_2(VAR_2, *VAR_3, VAR_0, VAR_0, 0,
       VAR_1, 0);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_1(VAR_2->gap_lebs);
 VAR_2->gap_lebs = ((void*)0);
 return 0;
}
