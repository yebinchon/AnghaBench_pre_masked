
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msg_hdr {int command; int len; int id; int data; scalar_t__ version; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_1, struct msg_hdr *VAR_2, uint32_t VAR_3)
{
 struct msg_hdr VAR_4;

 VAR_4.version = 0;
 VAR_4.command = VAR_2->command | VAR_0;
 VAR_4.len = sizeof VAR_4;
 VAR_4.data = VAR_3;
 VAR_4.id = VAR_2->id;
 FUNC_0(VAR_1, (char *) &VAR_4, sizeof VAR_4, 0);
}
