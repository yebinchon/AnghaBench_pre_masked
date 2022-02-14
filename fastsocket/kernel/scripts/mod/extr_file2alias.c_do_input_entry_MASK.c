
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_device_id {int flags; int swbit; int ffbit; int sndbit; int ledbit; int mscbit; int absbit; int relbit; int keybit; int evbit; int version; int product; int vendor; int bustype; } ;


 int FUNC_0 (char*,char*,int,int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_23, struct input_device_id *VAR_24,
     char *VAR_25)
{
 FUNC_2(VAR_25, "input:");

 FUNC_0(VAR_25, "b", VAR_24->flags & VAR_7, VAR_24->bustype);
 FUNC_0(VAR_25, "v", VAR_24->flags & VAR_17, VAR_24->vendor);
 FUNC_0(VAR_25, "p", VAR_24->flags & VAR_13, VAR_24->product);
 FUNC_0(VAR_25, "e", VAR_24->flags & VAR_18, VAR_24->version);

 FUNC_2(VAR_25 + FUNC_3(VAR_25), "-e*");
 if (VAR_24->flags & VAR_8)
  FUNC_1(VAR_25, VAR_24->evbit, 0, VAR_1);
 FUNC_2(VAR_25 + FUNC_3(VAR_25), "k*");
 if (VAR_24->flags & VAR_10)
  FUNC_1(VAR_25, VAR_24->keybit,
    VAR_4,
    VAR_3);
 FUNC_2(VAR_25 + FUNC_3(VAR_25), "r*");
 if (VAR_24->flags & VAR_14)
  FUNC_1(VAR_25, VAR_24->relbit, 0, VAR_20);
 FUNC_2(VAR_25 + FUNC_3(VAR_25), "a*");
 if (VAR_24->flags & VAR_6)
  FUNC_1(VAR_25, VAR_24->absbit, 0, VAR_0);
 FUNC_2(VAR_25 + FUNC_3(VAR_25), "m*");
 if (VAR_24->flags & VAR_12)
  FUNC_1(VAR_25, VAR_24->mscbit, 0, VAR_19);
 FUNC_2(VAR_25 + FUNC_3(VAR_25), "l*");
 if (VAR_24->flags & VAR_11)
  FUNC_1(VAR_25, VAR_24->ledbit, 0, VAR_5);
 FUNC_2(VAR_25 + FUNC_3(VAR_25), "s*");
 if (VAR_24->flags & VAR_15)
  FUNC_1(VAR_25, VAR_24->sndbit, 0, VAR_21);
 FUNC_2(VAR_25 + FUNC_3(VAR_25), "f*");
 if (VAR_24->flags & VAR_9)
  FUNC_1(VAR_25, VAR_24->ffbit, 0, VAR_2);
 FUNC_2(VAR_25 + FUNC_3(VAR_25), "w*");
 if (VAR_24->flags & VAR_16)
  FUNC_1(VAR_25, VAR_24->swbit, 0, VAR_22);
 return 1;
}
