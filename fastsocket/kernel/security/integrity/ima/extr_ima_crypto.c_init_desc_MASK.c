
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_desc {int tfm; scalar_t__ flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hash_desc*) ;
 int VAR_1 ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct hash_desc *VAR_2)
{
 int VAR_3;

 VAR_2->tfm = FUNC_2(VAR_1, 0, VAR_0);
 if (FUNC_0(VAR_2->tfm)) {
  FUNC_5("IMA: failed to load %s transform: %ld\n",
   VAR_1, FUNC_1(VAR_2->tfm));
  VAR_3 = FUNC_1(VAR_2->tfm);
  return VAR_3;
 }
 VAR_2->flags = 0;
 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  FUNC_3(VAR_2->tfm);
 return VAR_3;
}
