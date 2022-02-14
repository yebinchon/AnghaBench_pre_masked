
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vatpit {struct channel* channel; } ;
struct channel {int mode; int status; scalar_t__ olbyte; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct vatpit*,int) ;
 int FUNC_1 (struct vatpit*,struct channel*,int) ;

__attribute__((used)) static int
FUNC_2(struct vatpit *VAR_11, uint8_t VAR_12)
{
 struct channel *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_14 = VAR_12 & VAR_6;
 VAR_15 = VAR_12 & VAR_5;
 VAR_16 = VAR_12 & VAR_3;

 if (VAR_14 == VAR_7)
  return (FUNC_0(VAR_11, VAR_12));

 if (VAR_15 != VAR_2 && VAR_15 != VAR_0)
  return (-1);

 if (VAR_15 != VAR_2) {




  if (VAR_16 != VAR_1 &&
      VAR_16 != VAR_4 &&
      VAR_16 != VAR_8 &&
      VAR_16 != VAR_10)
   return (-1);
 }

 VAR_13 = &VAR_11->channel[VAR_14 >> 6];
 if (VAR_15 == VAR_2)
  FUNC_1(VAR_11, VAR_13, 1);
 else {
  VAR_13->mode = VAR_16;
  VAR_13->olbyte = 0;
  VAR_13->status |= VAR_9;
 }

 return (0);
}
