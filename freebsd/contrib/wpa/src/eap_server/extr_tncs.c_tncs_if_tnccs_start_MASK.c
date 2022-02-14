
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tncs_data {int last_batchid; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int,int ,int ) ;

char * FUNC_2(struct tncs_data *VAR_1)
{
 char *VAR_2 = FUNC_0(1000);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_1->last_batchid++;
 FUNC_1(VAR_2, 1000, VAR_0, VAR_1->last_batchid);
 return VAR_2;
}
