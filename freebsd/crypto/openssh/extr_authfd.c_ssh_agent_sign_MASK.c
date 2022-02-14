
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef scalar_t__ u_char ;
struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct sshkey const*,char const*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*,size_t) ;
 int FUNC_3 (int,struct sshbuf*,struct sshbuf*) ;
 int FUNC_4 (struct sshbuf*) ;
 int FUNC_5 (struct sshbuf*,scalar_t__**,size_t*) ;
 int FUNC_6 (struct sshbuf*,scalar_t__*) ;
 struct sshbuf* FUNC_7 () ;
 int FUNC_8 (struct sshbuf*,scalar_t__ const*,size_t) ;
 int FUNC_9 (struct sshbuf*,int ) ;
 int FUNC_10 (struct sshbuf*,int ) ;
 int FUNC_11 (scalar_t__*,size_t,char const*) ;
 int FUNC_12 (struct sshkey const*,struct sshbuf*) ;

int
FUNC_13(int VAR_8, const struct sshkey *VAR_9,
    u_char **VAR_10, size_t *VAR_11,
    const u_char *VAR_12, size_t VAR_13, const char *VAR_14, u_int VAR_15)
{
 struct sshbuf *VAR_16;
 u_char *VAR_17 = ((void*)0), VAR_18 = 0;
 size_t VAR_19 = 0;
 u_int VAR_20 = 0;
 int VAR_21 = VAR_4;

 *VAR_10 = ((void*)0);
 *VAR_11 = 0;

 if (VAR_13 > VAR_7)
  return VAR_5;
 if ((VAR_16 = FUNC_7()) == ((void*)0))
  return VAR_3;
 VAR_20 |= FUNC_0(VAR_9, VAR_14);
 if ((VAR_21 = FUNC_10(VAR_16, VAR_0)) != 0 ||
     (VAR_21 = FUNC_12(VAR_9, VAR_16)) != 0 ||
     (VAR_21 = FUNC_8(VAR_16, VAR_12, VAR_13)) != 0 ||
     (VAR_21 = FUNC_9(VAR_16, VAR_20)) != 0)
  goto out;
 if ((VAR_21 = FUNC_3(VAR_8, VAR_16, VAR_16)) != 0)
  goto out;
 if ((VAR_21 = FUNC_6(VAR_16, &VAR_18)) != 0)
  goto out;
 if (FUNC_1(VAR_18)) {
  VAR_21 = VAR_2;
  goto out;
 } else if (VAR_18 != VAR_1) {
  VAR_21 = VAR_6;
  goto out;
 }
 if ((VAR_21 = FUNC_5(VAR_16, &VAR_17, &VAR_19)) != 0)
  goto out;

 if ((VAR_21 = FUNC_11(VAR_17, VAR_19, VAR_14)) != 0)
  goto out;

 *VAR_10 = VAR_17;
 *VAR_11 = VAR_19;
 VAR_17 = ((void*)0);
 VAR_19 = 0;
 VAR_21 = 0;
 out:
 FUNC_2(VAR_17, VAR_19);
 FUNC_4(VAR_16);
 return VAR_21;
}
