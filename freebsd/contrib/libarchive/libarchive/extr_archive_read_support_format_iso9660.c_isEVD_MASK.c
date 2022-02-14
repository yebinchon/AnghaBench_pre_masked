
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso9660 {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
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
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_0 (unsigned char const*) ;
 scalar_t__ FUNC_1 (unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 int FUNC_3 (struct iso9660*,unsigned char const*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct iso9660 *VAR_19, const unsigned char *VAR_20)
{
 const unsigned char *VAR_21;
 ssize_t VAR_22;
 int32_t VAR_23;
 int32_t VAR_24;

 (void)VAR_19;


 if (VAR_20[VAR_15] != 2)
  return (0);


 if (VAR_20[VAR_16] != 2)
  return (0);


 if (VAR_20[VAR_3] != 0)
  return (0);


 if (!FUNC_3(VAR_19, VAR_20, VAR_4, VAR_5))
  return (0);


 if (!FUNC_3(VAR_19, VAR_20, VAR_6, VAR_7))
  return (0);




 VAR_22 =
     FUNC_1(VAR_20 + VAR_2);
 if (VAR_22 <= 0)
  return (0);

 VAR_23 =
     FUNC_2(VAR_20 + VAR_17);
 if (VAR_23 <= VAR_18+4)
  return (0);


 if (VAR_20[VAR_1] != 2)
  return (0);




 VAR_24 = FUNC_2(VAR_20+VAR_13);
 if (VAR_24 < VAR_18+2 || VAR_24 >= VAR_23)
  return (0);




 VAR_24 = FUNC_0(VAR_20+VAR_14);
 if ((VAR_24 > 0 && VAR_24 < VAR_18+2)
     || VAR_24 >= VAR_23)
  return (0);


 if (!FUNC_3(VAR_19, VAR_20, VAR_8, VAR_9))
  return (0);


 if (!FUNC_3(VAR_19, VAR_20, VAR_10, VAR_11))
  return (0);


 VAR_21 = VAR_20 + VAR_12;
 if (VAR_21[VAR_0] != 34)
  return (0);

 return (48);
}
