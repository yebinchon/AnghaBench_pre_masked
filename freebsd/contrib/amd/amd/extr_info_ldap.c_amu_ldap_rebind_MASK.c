
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_9__ {scalar_t__ ldap_proto_version; scalar_t__ ldap_cache_seconds; int ldap_cache_maxmem; } ;
struct TYPE_8__ {scalar_t__ timestamp; int * ldap; TYPE_1__* hostent; TYPE_2__* credentials; } ;
struct TYPE_7__ {int who; int method; int pw; } ;
struct TYPE_6__ {int port; int host; struct TYPE_6__* next; } ;
typedef int LDAP ;
typedef TYPE_1__ HE_ENT ;
typedef TYPE_2__ CR ;
typedef TYPE_3__ ALD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 TYPE_4__ VAR_7 ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,scalar_t__*) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_8(ALD *VAR_8)
{
  LDAP *VAR_9;
  HE_ENT *VAR_10;
  CR *VAR_11 = VAR_8->credentials;
  time_t VAR_12 = FUNC_1(((void*)0));
  int VAR_13;

  FUNC_2("-> amu_ldap_rebind\n");

  if (VAR_8->ldap != ((void*)0)) {
    if ((VAR_8->timestamp - VAR_12) > VAR_0) {
      FUNC_2("Re-establishing ldap connection\n");
      FUNC_0(VAR_8->ldap);
      VAR_8->timestamp = VAR_12;
      VAR_8->ldap = ((void*)0);
    } else {

      FUNC_2("amu_ldap_rebind: timestamp OK\n");
      return (0);
    }
  }

  for (VAR_13=0; VAR_13<10; VAR_13++) {
    for (VAR_10 = VAR_8->hostent; VAR_10 != ((void*)0); VAR_10 = VAR_10->next) {
      if ((VAR_9 = FUNC_5(VAR_10->host, VAR_10->port)) == ((void*)0)) {
 FUNC_7(VAR_6, "Unable to ldap_open to %s:%d\n", VAR_10->host, VAR_10->port);
 continue;
      }
      if (FUNC_3(VAR_9, VAR_11->who, VAR_11->pw, VAR_11->method) != VAR_3) {
 FUNC_7(VAR_6, "Unable to ldap_bind to %s:%d as %s\n",
      VAR_10->host, VAR_10->port, VAR_11->who);
 continue;
      }
      if (VAR_7.ldap_cache_seconds > 0) {



 FUNC_7(VAR_6, "ldap_enable_cache(%ld) is not available on this system!\n", VAR_7.ldap_cache_seconds);

      }
      VAR_8->ldap = VAR_9;
      VAR_8->timestamp = VAR_12;
      return (0);
    }
    FUNC_7(VAR_6, "Exhausted list of ldap servers, looping.\n");
  }

  FUNC_7(VAR_5, "Unable to (re)bind to any ldap hosts\n");
  return (VAR_1);
}
