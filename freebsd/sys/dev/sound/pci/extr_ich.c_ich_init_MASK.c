
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_info {scalar_t__ vendor; scalar_t__ devid; scalar_t__ hasmic; int dev; int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sc_info*,int ,int) ;
 scalar_t__ FUNC_3 (struct sc_info*,int) ;
 int FUNC_4 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_5(struct sc_info *VAR_13)
{
 uint32_t VAR_14;

 FUNC_4(VAR_13, VAR_5, VAR_1, 4);
 FUNC_0(600000);
 VAR_14 = FUNC_2(VAR_13, VAR_6, 4);

 if ((VAR_14 & VAR_3) == 0) {

  if (VAR_13->vendor == VAR_12 && (
      VAR_13->devid == VAR_8 || VAR_13->devid == VAR_9 ||
      VAR_13->devid == VAR_7 || VAR_13->devid == VAR_10 ||
      VAR_13->devid == VAR_11)) {
   VAR_13->flags |= VAR_4;
   FUNC_1(VAR_13->dev, "primary codec not ready!\n");
  }
 }




 FUNC_4(VAR_13, VAR_5, VAR_1, 4);


 if (FUNC_3(VAR_13, 0) || FUNC_3(VAR_13, 1))
  return (VAR_0);
 if (VAR_13->hasmic && FUNC_3(VAR_13, 2))
  return (VAR_0);

 return (0);
}
