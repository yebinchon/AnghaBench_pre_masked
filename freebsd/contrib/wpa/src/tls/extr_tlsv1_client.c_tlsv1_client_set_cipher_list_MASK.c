
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct tlsv1_client {size_t num_cipher_suites; int * cipher_suites; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_0(struct tlsv1_client *VAR_8, u8 *VAR_9)
{
 size_t VAR_10;
 u16 *VAR_11;


 if (VAR_9[0] == VAR_0) {
  VAR_10 = 0;
  VAR_11 = VAR_8->cipher_suites;
  VAR_11[VAR_10++] = VAR_5;
  VAR_11[VAR_10++] = VAR_4;
  VAR_11[VAR_10++] = VAR_3;
  VAR_11[VAR_10++] = VAR_2;
  VAR_11[VAR_10++] = VAR_1;
  VAR_11[VAR_10++] = VAR_7;
  VAR_11[VAR_10++] = VAR_6;
  VAR_11[VAR_10++] = VAR_2;
  VAR_8->num_cipher_suites = VAR_10;
 }

 return 0;
}
