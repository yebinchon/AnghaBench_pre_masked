
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dos_partition {unsigned long dp_start; scalar_t__ dp_size; int dp_flag; int dp_typ; } ;
struct TYPE_2__ {struct dos_partition* parts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dos_partition*) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_6)
{
 struct dos_partition *VAR_7 = &VAR_5.parts[0];

 FUNC_1();

 VAR_7->dp_typ = VAR_1;
 VAR_7->dp_flag = VAR_0;
 VAR_6 = FUNC_3(VAR_6, VAR_4);
 if(VAR_6 == 0)
  VAR_6 = VAR_4;
 VAR_7->dp_start = VAR_6;
 VAR_7->dp_size = FUNC_2(VAR_2, VAR_3) - VAR_6;

 FUNC_0(VAR_7);
}
