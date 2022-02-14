
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;
struct hash_desc {int dummy; } ;


 int FUNC_0 (struct hash_desc*,struct scatterlist*,int ) ;

__attribute__((used)) static int
FUNC_1(struct scatterlist *VAR_0, void *VAR_1)
{
 struct hash_desc *VAR_2 = VAR_1;

 return FUNC_0(VAR_2, VAR_0, VAR_0->length);
}
