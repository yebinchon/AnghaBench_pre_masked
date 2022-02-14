
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tlsv1_server {int state; int rl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ const VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct tlsv1_server*,int ,int ) ;
 int FUNC_2 (struct tlsv1_server*,char*,...) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct tlsv1_server *VAR_8,
       u8 VAR_9, const u8 *VAR_10,
       size_t *VAR_11)
{
 const u8 *VAR_12;
 size_t VAR_13;

 if (VAR_9 != VAR_7) {
  FUNC_2(VAR_8, "Expected ChangeCipherSpec; received content type 0x%x",
     VAR_9);
  FUNC_1(VAR_8, VAR_4,
       VAR_5);
  return -1;
 }

 VAR_12 = VAR_10;
 VAR_13 = *VAR_11;

 if (VAR_13 < 1) {
  FUNC_2(VAR_8, "Too short ChangeCipherSpec");
  FUNC_1(VAR_8, VAR_4,
       VAR_2);
  return -1;
 }

 if (*VAR_12 != VAR_6) {
  FUNC_2(VAR_8, "Expected ChangeCipherSpec; received data 0x%x",
     *VAR_12);
  FUNC_1(VAR_8, VAR_4,
       VAR_5);
  return -1;
 }

 FUNC_2(VAR_8, "Received ChangeCipherSpec");
 if (FUNC_0(&VAR_8->rl) < 0) {
  FUNC_3(VAR_1, "TLSv1: Failed to change read cipher "
      "for record layer");
  FUNC_1(VAR_8, VAR_4,
       VAR_3);
  return -1;
 }

 *VAR_11 = VAR_12 + 1 - VAR_10;

 VAR_8->state = VAR_0;

 return 0;
}
