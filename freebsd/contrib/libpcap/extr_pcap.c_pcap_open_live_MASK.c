
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int oldstyle; int errbuf; } ;
typedef TYPE_1__ pcap_t ;


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
 char const* VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char const*,char*) ;
 TYPE_1__* FUNC_3 (char const*,int,int ,int,int *,char*) ;
 scalar_t__ FUNC_4 (char const*,int*,char*,char*,char*,char*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (char*,int ,char*,...) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,char const*,int) ;

pcap_t *
FUNC_12(const char *VAR_11, int VAR_12, int VAR_13, int VAR_14, char *VAR_15)
{
 pcap_t *VAR_16;
 int VAR_17;
 VAR_16 = FUNC_2(VAR_11, VAR_15);
 if (VAR_16 == ((void*)0))
  return (((void*)0));
 VAR_17 = FUNC_6(VAR_16, VAR_12);
 if (VAR_17 < 0)
  goto fail;
 VAR_17 = FUNC_5(VAR_16, VAR_13);
 if (VAR_17 < 0)
  goto fail;
 VAR_17 = FUNC_7(VAR_16, VAR_14);
 if (VAR_17 < 0)
  goto fail;
 VAR_16->oldstyle = 1;
 VAR_17 = FUNC_0(VAR_16);
 if (VAR_17 < 0)
  goto fail;
 return (VAR_16);
fail:
 if (VAR_17 == VAR_2)
  FUNC_8(VAR_15, VAR_1, "%s: %s", VAR_11,
      VAR_16->errbuf);
 else if (VAR_17 == VAR_3 ||
     VAR_17 == VAR_4 ||
     VAR_17 == VAR_5)
  FUNC_8(VAR_15, VAR_1, "%s: %s (%s)", VAR_11,
      FUNC_9(VAR_17), VAR_16->errbuf);
 else
  FUNC_8(VAR_15, VAR_1, "%s: %s", VAR_11,
      FUNC_9(VAR_17));
 FUNC_1(VAR_16);
 return (((void*)0));
}
