
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sc25519 ;
typedef int ge25519 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*,unsigned char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int *,int *,int *) ;
 int FUNC_2 (unsigned char*,int *) ;
 scalar_t__ FUNC_3 (int *,unsigned char const*) ;
 int FUNC_4 (unsigned char*,unsigned char const*,unsigned char const*,unsigned char*,unsigned long long) ;
 int FUNC_5 (int *,unsigned char const*) ;
 int FUNC_6 (int *,unsigned char*) ;

int FUNC_7(
    unsigned char *VAR_2,unsigned long long *VAR_3,
    const unsigned char *VAR_4,unsigned long long VAR_5,
    const unsigned char *VAR_6
    )
{
  unsigned int VAR_7;
  int VAR_8;
  unsigned char VAR_9[32];
  ge25519 VAR_10, VAR_11;
  sc25519 VAR_12, VAR_13;
  unsigned char VAR_14[VAR_0];

  *VAR_3 = (unsigned long long) -1;
  if (VAR_5 < 64) return -1;

  if (FUNC_3(&VAR_10, VAR_6)) return -1;

  FUNC_4(VAR_14,VAR_4,VAR_6,VAR_2,VAR_5);

  FUNC_6(&VAR_12, VAR_14);

  FUNC_5(&VAR_13, VAR_4+32);

  FUNC_1(&VAR_11, &VAR_10, &VAR_12, &VAR_1, &VAR_13);
  FUNC_2(VAR_9, &VAR_11);

  VAR_8 = FUNC_0(VAR_4, VAR_9);

  if (!VAR_8)
  {
    for(VAR_7=0;VAR_7<VAR_5-64;VAR_7++)
      VAR_2[VAR_7] = VAR_4[VAR_7 + 64];
    *VAR_3 = VAR_5-64;
  }
  else
  {
    for(VAR_7=0;VAR_7<VAR_5-64;VAR_7++)
      VAR_2[VAR_7] = 0;
  }
  return VAR_8;
}
