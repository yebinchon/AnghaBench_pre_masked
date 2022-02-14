
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int32 ;
typedef int int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 char* FUNC_1 (int,int,int) ;
 int FUNC_2 (char*,...) ;

void
FUNC_3(
 int32 *VAR_4,
 u_int32 *VAR_5,
 int32 VAR_6,
 u_int32 VAR_7,
 int32 VAR_8,
 u_int32 VAR_9
 )
{
  int32 VAR_10, VAR_11;
  u_int32 VAR_12;
  u_long VAR_13[4];
  u_long VAR_14[4];
  u_long VAR_15[5];
  u_long VAR_16;

  int VAR_17 = 0;

  if (VAR_6 < 0)
    {
      VAR_17 = 1;
      FUNC_0(VAR_6, VAR_7);
    }

  if (VAR_8 < 0)
    {
      VAR_17 = !VAR_17;
      FUNC_0(VAR_8, VAR_9);
    }

  VAR_13[0] = VAR_7 & VAR_2;
  VAR_13[1] = (VAR_7 & VAR_1) >> (VAR_0/2);
  VAR_13[2] = VAR_6 & VAR_2;
  VAR_13[3] = (VAR_6 & VAR_1) >> (VAR_0/2);

  VAR_14[0] = VAR_9 & VAR_2;
  VAR_14[1] = (VAR_9 & VAR_1) >> (VAR_0/2);
  VAR_14[2] = VAR_8 & VAR_2;
  VAR_14[3] = (VAR_8 & VAR_1) >> (VAR_0/2);

  VAR_15[0] = VAR_15[1] = VAR_15[2] = VAR_15[3] = VAR_15[4] = 0;

  for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
    for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
      {
 u_long VAR_18, VAR_19;
 int VAR_20 = (VAR_10+VAR_11)/2;
 int VAR_21 = 1+VAR_20;


 int VAR_22 = 1+VAR_21;


 VAR_18 = (u_long)VAR_13[VAR_10] * (u_long)VAR_14[VAR_11];

 if ((VAR_10+VAR_11) & 1)
   {
     VAR_19 = VAR_18 >> (VAR_0/2);
     VAR_18 <<= VAR_0/2;
     VAR_16 = (unsigned)1<<(VAR_0/2);
   }
 else
   {
     VAR_19 = 0;
     VAR_16 = 1;
   }

 if (((VAR_15[VAR_20] >> 1) + (VAR_18 >> 1) + ((VAR_15[VAR_20] & VAR_18 & VAR_16) != 0)) &
     (u_int32)((unsigned)1<<(VAR_0 - 1))) {
   VAR_19++;
        }

 VAR_15[VAR_20] += VAR_18;

 if (((VAR_15[VAR_21] >> 1) + (VAR_19 >> 1) + ((VAR_15[VAR_21] & VAR_19 & 1) != 0)) &
     (u_int32)((unsigned)1<<(VAR_0 - 1))) {
   VAR_15[VAR_22]++;
        }

 VAR_15[VAR_21] += VAR_19;
      }







  if (VAR_15[3])
    {
      VAR_10 = ((unsigned)1 << (VAR_0-1)) - 1;
      VAR_12 = ~(unsigned)0;
    }
  else
    {
      VAR_10 = VAR_15[2];
      VAR_12 = VAR_15[1];
    }

  if (VAR_17)
    {
      FUNC_0(VAR_10, VAR_12);
    }

  *VAR_4 = VAR_10;
  *VAR_5 = VAR_12;
}
