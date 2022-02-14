
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adreq {int adr_error; scalar_t__ adr_datasize; scalar_t__ adr_seq; int adr_cmd; int adr_byteorder; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct adreq *VAR_2)
{

 VAR_2->adr_error = -1;
 VAR_2->adr_byteorder = VAR_0;
 VAR_2->adr_cmd = VAR_1;
 VAR_2->adr_seq = 0;
 VAR_2->adr_datasize = 0;
}
