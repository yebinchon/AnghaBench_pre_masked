
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_char ;
struct sshauthopt {int restricted; int permit_port_forwarding_flag; int permit_agent_forwarding_flag; int permit_x11_forwarding_flag; int permit_pty_flag; int permit_user_rc; int cert_authority; scalar_t__ valid_before; scalar_t__ nenv; char** env; int force_tun_device; int npermitlisten; int permitlisten; int npermitopen; int permitopen; int * required_from_host_keys; int * cert_principals; int * force_command; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const**,int,int *,int *,char const**) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (char const**,char const**) ;
 int FUNC_5 (char*,int,char const**) ;
 scalar_t__ FUNC_6 (char const**,char*) ;
 scalar_t__ FUNC_7 (char*,scalar_t__*) ;
 char** FUNC_8 (char**,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (struct sshauthopt*) ;
 struct sshauthopt* FUNC_10 () ;
 char* FUNC_11 (char*,char) ;

struct sshauthopt *
FUNC_12(const char *VAR_2, const char **VAR_3)
{
 char **VAR_4, *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;
 struct sshauthopt *VAR_9 = ((void*)0);
 const char *VAR_10 = "unknown error";
 uint64_t VAR_11;

 if (VAR_3 != ((void*)0))
  *VAR_3 = ((void*)0);
 if ((VAR_9 = FUNC_10()) == ((void*)0))
  goto alloc_fail;

 if (VAR_2 == ((void*)0))
  return VAR_9;

 while (*VAR_2 && *VAR_2 != ' ' && *VAR_2 != '\t') {

  if ((VAR_8 = FUNC_5("restrict", 0, &VAR_2)) != -1) {
   VAR_9->restricted = 1;
   VAR_9->permit_port_forwarding_flag = 0;
   VAR_9->permit_agent_forwarding_flag = 0;
   VAR_9->permit_x11_forwarding_flag = 0;
   VAR_9->permit_pty_flag = 0;
   VAR_9->permit_user_rc = 0;
  } else if ((VAR_8 = FUNC_5("cert-authority", 0, &VAR_2)) != -1) {
   VAR_9->cert_authority = VAR_8;
  } else if ((VAR_8 = FUNC_5("port-forwarding", 1, &VAR_2)) != -1) {
   VAR_9->permit_port_forwarding_flag = VAR_8 == 1;
  } else if ((VAR_8 = FUNC_5("agent-forwarding", 1, &VAR_2)) != -1) {
   VAR_9->permit_agent_forwarding_flag = VAR_8 == 1;
  } else if ((VAR_8 = FUNC_5("x11-forwarding", 1, &VAR_2)) != -1) {
   VAR_9->permit_x11_forwarding_flag = VAR_8 == 1;
  } else if ((VAR_8 = FUNC_5("pty", 1, &VAR_2)) != -1) {
   VAR_9->permit_pty_flag = VAR_8 == 1;
  } else if ((VAR_8 = FUNC_5("user-rc", 1, &VAR_2)) != -1) {
   VAR_9->permit_user_rc = VAR_8 == 1;
  } else if (FUNC_6(&VAR_2, "command")) {
   if (VAR_9->force_command != ((void*)0)) {
    VAR_10 = "multiple \"command\" clauses";
    goto fail;
   }
   VAR_9->force_command = FUNC_4(&VAR_2, &VAR_10);
   if (VAR_9->force_command == ((void*)0))
    goto fail;
  } else if (FUNC_6(&VAR_2, "principals")) {
   if (VAR_9->cert_principals != ((void*)0)) {
    VAR_10 = "multiple \"principals\" clauses";
    goto fail;
   }
   VAR_9->cert_principals = FUNC_4(&VAR_2, &VAR_10);
   if (VAR_9->cert_principals == ((void*)0))
    goto fail;
  } else if (FUNC_6(&VAR_2, "from")) {
   if (VAR_9->required_from_host_keys != ((void*)0)) {
    VAR_10 = "multiple \"from\" clauses";
    goto fail;
   }
   VAR_9->required_from_host_keys = FUNC_4(&VAR_2,
       &VAR_10);
   if (VAR_9->required_from_host_keys == ((void*)0))
    goto fail;
  } else if (FUNC_6(&VAR_2, "expiry-time")) {
   if ((VAR_5 = FUNC_4(&VAR_2, &VAR_10)) == ((void*)0))
    goto fail;
   if (FUNC_7(VAR_5, &VAR_11) != 0 ||
       VAR_11 == 0) {
    FUNC_1(VAR_5);
    VAR_10 = "invalid expires time";
    goto fail;
   }
   FUNC_1(VAR_5);
   if (VAR_9->valid_before == 0 ||
       VAR_11 < VAR_9->valid_before)
    VAR_9->valid_before = VAR_11;
  } else if (FUNC_6(&VAR_2, "environment")) {
   if (VAR_9->nenv > VAR_0) {
    VAR_10 = "too many environment strings";
    goto fail;
   }
   if ((VAR_5 = FUNC_4(&VAR_2, &VAR_10)) == ((void*)0))
    goto fail;

   if ((VAR_7 = FUNC_11(VAR_5, '=')) == ((void*)0)) {
    FUNC_1(VAR_5);
    VAR_10 = "invalid environment string";
    goto fail;
   }
   for (VAR_6 = VAR_5; VAR_6 < VAR_7; VAR_6++) {
    if (!FUNC_3((u_char)*VAR_6) && *VAR_6 != '_') {
     FUNC_1(VAR_5);
     VAR_10 = "invalid environment string";
     goto fail;
    }
   }

   VAR_4 = VAR_9->env;
   if ((VAR_9->env = FUNC_8(VAR_9->env, VAR_9->nenv,
       VAR_9->nenv + 1, sizeof(*VAR_9->env))) == ((void*)0)) {
    FUNC_1(VAR_5);
    VAR_9->env = VAR_4;
    goto alloc_fail;
   }
   VAR_9->env[VAR_9->nenv++] = VAR_5;
  } else if (FUNC_6(&VAR_2, "permitopen")) {
   if (FUNC_2(&VAR_2, 0, &VAR_9->permitopen,
       &VAR_9->npermitopen, &VAR_10) != 0)
    goto fail;
  } else if (FUNC_6(&VAR_2, "permitlisten")) {
   if (FUNC_2(&VAR_2, 1, &VAR_9->permitlisten,
       &VAR_9->npermitlisten, &VAR_10) != 0)
    goto fail;
  } else if (FUNC_6(&VAR_2, "tunnel")) {
   if ((VAR_5 = FUNC_4(&VAR_2, &VAR_10)) == ((void*)0))
    goto fail;
   VAR_9->force_tun_device = FUNC_0(VAR_5, ((void*)0));
   FUNC_1(VAR_5);
   if (VAR_9->force_tun_device == VAR_1) {
    VAR_10 = "invalid tun device";
    goto fail;
   }
  }




  if (*VAR_2 == '\0' || *VAR_2 == ' ' || *VAR_2 == '\t')
   break;

  if (*VAR_2 != ',') {
   VAR_10 = "unknown key option";
   goto fail;
  }
  VAR_2++;
  if (*VAR_2 == '\0') {
   VAR_10 = "unexpected end-of-options";
   goto fail;
  }
 }


 if (VAR_3 != ((void*)0))
  *VAR_3 = ((void*)0);
 return VAR_9;

alloc_fail:
 VAR_10 = "memory allocation failed";
fail:
 FUNC_9(VAR_9);
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_10;
 return ((void*)0);
}
