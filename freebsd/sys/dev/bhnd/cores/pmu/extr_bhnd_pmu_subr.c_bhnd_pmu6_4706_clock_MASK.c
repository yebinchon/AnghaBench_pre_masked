
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct bhnd_pmu_query {int io_ctx; TYPE_1__* io; } ;
struct TYPE_2__ {int (* rd_chipst ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bhnd_pmu_query*,int ) ;
 int FUNC_2 (struct bhnd_pmu_query*,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (struct bhnd_pmu_query*,char*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static uint32_t
FUNC_5(struct bhnd_pmu_query *VAR_7, u_int VAR_8, u_int VAR_9)
{
 uint32_t VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14, VAR_15;


 FUNC_2(VAR_7, VAR_4,
     VAR_8 + VAR_0);
 FUNC_1(VAR_7, VAR_4);

 VAR_15 = FUNC_1(VAR_7, VAR_5);
 VAR_12 = FUNC_0(VAR_15, VAR_1);
 VAR_13 = FUNC_0(VAR_15, VAR_2);
 VAR_14 = FUNC_0(VAR_15, VAR_3);


 VAR_11 = 25 * 1000 * 1000;


 VAR_10 = VAR_7->io->rd_chipst(VAR_7->io_ctx);
 if (VAR_10 & VAR_6)
  VAR_11 /= 4;
 else
  VAR_11 /= 2;

 VAR_11 *= VAR_12 * VAR_14 / VAR_13;

 switch (VAR_9) {
 case 130:
  return (VAR_11);
 case 129:
  return (VAR_11 / 2);
 case 128:
  return (VAR_11 / 4);
 default:
  FUNC_3(VAR_7, "bad m divider: %d", VAR_9);
  return (0);
 }
}
