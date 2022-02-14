
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {int tagChecksum; void* descCRC; void* descCRCLength; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct tag*) ;

void FUNC_3(char *VAR_0, int VAR_1)
{
 struct tag *VAR_2 = (struct tag *)VAR_0;
 VAR_1 -= sizeof(struct tag);

 VAR_2->descCRCLength = FUNC_0(VAR_1);
 VAR_2->descCRC = FUNC_0(FUNC_1(0, VAR_0 + sizeof(struct tag), VAR_1));
 VAR_2->tagChecksum = FUNC_2(VAR_2);
}
