
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_packet {int type; } ;
struct pt_encoder {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,struct pt_packet*) ;

int FUNC_1(struct pt_encoder *VAR_1)
{
 struct pt_packet VAR_2;

 VAR_2.type = VAR_0;

 return FUNC_0(VAR_1, &VAR_2);
}
