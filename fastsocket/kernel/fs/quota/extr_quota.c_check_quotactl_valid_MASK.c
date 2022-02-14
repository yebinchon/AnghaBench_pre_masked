
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef int qid_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct super_block*,int,int,int ) ;
 int FUNC_2 (int,int,int ,struct super_block*) ;
 int FUNC_3 (struct super_block*,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_0, int VAR_1, int VAR_2,
    qid_t VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_2))
  VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_2(VAR_2, VAR_1, VAR_3, VAR_0);
 return VAR_4;
}
