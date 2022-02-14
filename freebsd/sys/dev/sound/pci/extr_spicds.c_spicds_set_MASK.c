
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spicds_info {int type; int lock; int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int const VAR_15 ;


 int VAR_16 ;
 int VAR_17 ;

 int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct spicds_info*,int ,unsigned int) ;

void
FUNC_4(struct spicds_info *VAR_21, int VAR_22, unsigned int VAR_23, unsigned int VAR_24)
{



 FUNC_1(VAR_21->lock);
 if (VAR_23 >= 100)
  if ((VAR_21->type == 130) || (VAR_21->type == 129))

   VAR_23 = 255;
  else
   VAR_23 = 127;
 else
  switch (VAR_21->type) {
  case 128:
   VAR_23 = VAR_23 + 27;
   break;
  case 130:
  case 129:
   VAR_23 = VAR_23 * 255 / 100;
   break;
  default:
   VAR_23 = VAR_23 * 127 / 100;
  }
 if (VAR_24 >= 100)
  if ((VAR_21->type == 130) || (VAR_21->type == 129))

                        VAR_24 = 255;
                else
   VAR_24 = 127;
 else
  switch (VAR_21->type) {
  case 128:
                        VAR_24 = VAR_24 + 27;
   break;
  case 130:
  case 129:
   VAR_24 = VAR_24 * 255 / 100;
   break;
                default:
                        VAR_24 = VAR_24 * 127 / 100;
  }
 if (VAR_22 == VAR_14 && VAR_21->type == VAR_16) {



  FUNC_3(VAR_21, VAR_7, VAR_23);
  FUNC_3(VAR_21, VAR_9, VAR_24);
 }
 if (VAR_22 == VAR_13 && VAR_21->type == VAR_16) {



  FUNC_3(VAR_21, VAR_8, VAR_23);
  FUNC_3(VAR_21, VAR_10, VAR_24);
 }
 if (VAR_22 == VAR_13 && VAR_21->type == VAR_17) {



  FUNC_3(VAR_21, VAR_11, VAR_23);
  FUNC_3(VAR_21, VAR_12, VAR_24);
 }
        if (VAR_22 == VAR_13 && VAR_21->type == 128) {



                FUNC_3(VAR_21, VAR_18, VAR_23 | VAR_20);
                FUNC_3(VAR_21, VAR_19, VAR_24 | VAR_20);
        }
        if (VAR_22 == VAR_13 && VAR_21->type == VAR_15) {



                FUNC_3(VAR_21, VAR_0, VAR_23 | VAR_1);
                FUNC_3(VAR_21, VAR_2, VAR_24 | VAR_1);
        }
        if (VAR_22 == VAR_13 && VAR_21->type == 130) {



                FUNC_3(VAR_21, VAR_3, VAR_23);
                FUNC_3(VAR_21, VAR_4, VAR_24);
        }

        if (VAR_22 == VAR_13 && VAR_21->type == 129) {



                FUNC_3(VAR_21, VAR_5, VAR_23);
                FUNC_3(VAR_21, VAR_6, VAR_24);
        }

 FUNC_2(VAR_21->lock);
}
