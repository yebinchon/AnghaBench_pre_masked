
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct bhnd_core_clkctl {int cc_quirks; scalar_t__ cc_max_latency; int cc_dev; int cc_res_offset; int cc_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bhnd_core_clkctl*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,int,int) ;

int
FUNC_4(struct bhnd_core_clkctl *VAR_7, uint32_t VAR_8,
    uint32_t VAR_9)
{
 uint32_t VAR_10;

 FUNC_0(VAR_7, VAR_6);


 if (VAR_7->cc_quirks & VAR_4) {
  uint32_t VAR_11, VAR_12;

  VAR_11 = VAR_9 & ~(VAR_3 | VAR_2);
  VAR_12 = VAR_8 & ~(VAR_3 | VAR_2);

  if (VAR_9 & VAR_3)
   VAR_11 |= VAR_1;
  if (VAR_8 & VAR_3)
   VAR_12 |= VAR_1;

  if (VAR_9 & VAR_2)
   VAR_11 |= VAR_0;
  if (VAR_8 & VAR_2)
   VAR_12 |= VAR_0;

  VAR_9 = VAR_11;
  VAR_8 = VAR_12;
 }

 for (u_int VAR_13 = 0; VAR_13 < VAR_7->cc_max_latency; VAR_13 += 10) {
  VAR_10 = FUNC_2(VAR_7->cc_res, VAR_7->cc_res_offset);
  if ((VAR_10 & VAR_9) == (VAR_8 & VAR_9))
   return (0);

  FUNC_1(10);
 }

 FUNC_3(VAR_7->cc_dev, "clkst wait timeout (value=%#x, "
     "mask=%#x)\n", VAR_8, VAR_9);

 return (VAR_5);
}
