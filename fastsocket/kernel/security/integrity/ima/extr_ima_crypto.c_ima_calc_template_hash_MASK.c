
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct hash_desc {int tfm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hash_desc*,char*) ;
 int FUNC_2 (struct hash_desc*,struct scatterlist*,int) ;
 int FUNC_3 (struct hash_desc*) ;
 int FUNC_4 (struct scatterlist*,void*,int) ;

int FUNC_5(int VAR_0, void *VAR_1, char *VAR_2)
{
 struct hash_desc VAR_3;
 struct scatterlist VAR_4[1];
 int VAR_5;

 VAR_5 = FUNC_3(&VAR_3);
 if (VAR_5 != 0)
  return VAR_5;

 FUNC_4(VAR_4, VAR_1, VAR_0);
 VAR_5 = FUNC_2(&VAR_3, VAR_4, VAR_0);
 if (!VAR_5)
  VAR_5 = FUNC_1(&VAR_3, VAR_2);
 FUNC_0(VAR_3.tfm);
 return VAR_5;
}
