
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (unsigned char const*) ;
 scalar_t__ FUNC_1 (unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 int FUNC_3 (struct iso9660*,unsigned char const*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct iso9660 *VAR_15, const unsigned char *VAR_16)
{
 const unsigned char *VAR_17;
 ssize_t VAR_18;
 int32_t VAR_19;
 int32_t VAR_20;

 (void)VAR_15;


 if (VAR_16[VAR_12] != 2)
  return (0);


 if (!FUNC_3(VAR_15, VAR_16, VAR_3, VAR_4))
  return (0);
 if (!FUNC_3(VAR_15, VAR_16, VAR_5, VAR_6))
  return (0);
 if (!FUNC_3(VAR_15, VAR_16, VAR_7, VAR_8))
  return (0);


 if (VAR_16[VAR_1] != 1)
  return (0);

 VAR_18 =
     FUNC_1(VAR_16 + VAR_2);
 if (VAR_18 <= 0)
  return (0);

 VAR_19 = FUNC_2(VAR_16 + VAR_13);
 if (VAR_19 <= VAR_14+4)
  return (0);




 VAR_20 = FUNC_2(VAR_16+VAR_10);
 if (VAR_20 < VAR_14+2 || VAR_20 >= VAR_19)
  return (0);





 VAR_20 = FUNC_0(VAR_16+VAR_11);
 if ((VAR_20 > 0 && VAR_20 < VAR_14+2)
     || VAR_20 >= VAR_19)
  return (0);


 VAR_17 = VAR_16 + VAR_9;
 if (VAR_17[VAR_0] != 34)
  return (0);

 return (48);
}
