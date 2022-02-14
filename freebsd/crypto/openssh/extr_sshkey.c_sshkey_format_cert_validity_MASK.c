
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int to ;
typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
struct sshkey_cert {scalar_t__ valid_after; int valid_before; } ;
typedef int ret ;
typedef int from ;


 scalar_t__ VAR_0 ;
 struct tm* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,int,char*,char*,...) ;
 int FUNC_2 (char*,int,char*,struct tm*) ;
 size_t FUNC_3 (char*,char*,size_t) ;

size_t
FUNC_4(const struct sshkey_cert *VAR_1, char *VAR_2, size_t VAR_3)
{
 char VAR_4[32], VAR_5[32], VAR_6[64];
 time_t VAR_7;
 struct tm *VAR_8;

 *VAR_4 = *VAR_5 = '\0';
 if (VAR_1->valid_after == 0 &&
     VAR_1->valid_before == 0xffffffffffffffffULL)
  return FUNC_3(VAR_2, "forever", VAR_3);

 if (VAR_1->valid_after != 0) {

  VAR_7 = VAR_1->valid_after > VAR_0 ?
      VAR_0 : VAR_1->valid_after;
  VAR_8 = FUNC_0(&VAR_7);
  FUNC_2(VAR_4, sizeof(VAR_4), "%Y-%m-%dT%H:%M:%S", VAR_8);
 }
 if (VAR_1->valid_before != 0xffffffffffffffffULL) {

  VAR_7 = VAR_1->valid_before > VAR_0 ?
      VAR_0 : VAR_1->valid_before;
  VAR_8 = FUNC_0(&VAR_7);
  FUNC_2(VAR_5, sizeof(VAR_5), "%Y-%m-%dT%H:%M:%S", VAR_8);
 }

 if (VAR_1->valid_after == 0)
  FUNC_1(VAR_6, sizeof(VAR_6), "before %s", VAR_5);
 else if (VAR_1->valid_before == 0xffffffffffffffffULL)
  FUNC_1(VAR_6, sizeof(VAR_6), "after %s", VAR_4);
 else
  FUNC_1(VAR_6, sizeof(VAR_6), "from %s to %s", VAR_4, VAR_5);

 return FUNC_3(VAR_2, VAR_6, VAR_3);
}
