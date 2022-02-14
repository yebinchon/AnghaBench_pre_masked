
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_client {int rl; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tlsv1_client*,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int,int *,int,size_t*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct tlsv1_client *VAR_5,
            u8 **VAR_6, u8 *VAR_7)
{
 size_t VAR_8;
 u8 VAR_9[1];

 FUNC_3(VAR_0, "TLSv1: Send ChangeCipherSpec");

 VAR_9[0] = VAR_3;

 if (FUNC_2(&VAR_5->rl, VAR_4,
         *VAR_6, VAR_7 - *VAR_6, VAR_9, sizeof(VAR_9),
         &VAR_8) < 0) {
  FUNC_3(VAR_0, "TLSv1: Failed to create a record");
  FUNC_0(VAR_5, VAR_2,
     VAR_1);
  return -1;
 }

 if (FUNC_1(&VAR_5->rl) < 0) {
  FUNC_3(VAR_0, "TLSv1: Failed to set write cipher for "
      "record layer");
  FUNC_0(VAR_5, VAR_2,
     VAR_1);
  return -1;
 }

 *VAR_6 += VAR_8;

 return 0;
}
