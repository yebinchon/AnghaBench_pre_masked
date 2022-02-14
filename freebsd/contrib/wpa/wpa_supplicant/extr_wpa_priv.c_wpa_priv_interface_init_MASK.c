
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_priv_interface {int fd; char const* driver_name; char const* ifname; char const* sock_name; TYPE_1__* driver; void* ctx; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 char const* FUNC_3 (char const*,size_t) ;
 int FUNC_4 (int,int ,struct wpa_priv_interface*,int *) ;
 int VAR_9 ;
 char const* FUNC_5 (size_t) ;
 int FUNC_6 (struct sockaddr_un*,int ,int) ;
 int FUNC_7 (char const*,size_t,char*,char const*,char const*) ;
 char* FUNC_8 (char const*,char) ;
 scalar_t__ FUNC_9 (char const*,int ) ;
 char const* FUNC_10 (char*) ;
 int FUNC_11 (int ,char const*,int) ;
 int FUNC_12 (char const*) ;
 struct wpa_priv_interface* FUNC_13 (int) ;
 int FUNC_14 (int ,int ,int ) ;
 char const* FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (char const*) ;
 TYPE_1__** VAR_10 ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (struct wpa_priv_interface*) ;
 int VAR_11 ;

__attribute__((used)) static struct wpa_priv_interface *
FUNC_19(void *VAR_12, const char *VAR_13, const char *VAR_14)
{
 struct wpa_priv_interface *VAR_15;
 char *VAR_16;
 size_t VAR_17;
 struct sockaddr_un VAR_18;
 int VAR_19;

 VAR_16 = FUNC_8(VAR_14, ':');
 if (VAR_16 == ((void*)0))
  return ((void*)0);

 VAR_15 = FUNC_13(sizeof(*VAR_15));
 if (VAR_15 == ((void*)0))
  return ((void*)0);
 VAR_15->fd = -1;
 VAR_15->ctx = VAR_12;

 VAR_17 = VAR_16 - VAR_14;
 VAR_15->driver_name = FUNC_3(VAR_14, VAR_17);
 if (VAR_15->driver_name == ((void*)0)) {
  FUNC_18(VAR_15);
  return ((void*)0);
 }

 for (VAR_19 = 0; VAR_10[VAR_19]; VAR_19++) {
  if (FUNC_9(VAR_15->driver_name,
         VAR_10[VAR_19]->name) == 0) {
   VAR_15->driver = VAR_10[VAR_19];
   break;
  }
 }
 if (VAR_15->driver == ((void*)0)) {
  FUNC_17(VAR_2, "Unsupported driver '%s'",
      VAR_15->driver_name);
  FUNC_18(VAR_15);
  return ((void*)0);
 }

 VAR_16++;
 VAR_15->ifname = FUNC_10(VAR_16);
 if (VAR_15->ifname == ((void*)0)) {
  FUNC_18(VAR_15);
  return ((void*)0);
 }

 VAR_17 = FUNC_12(VAR_13) + 1 + FUNC_12(VAR_15->ifname);
 VAR_15->sock_name = FUNC_5(VAR_17 + 1);
 if (VAR_15->sock_name == ((void*)0)) {
  FUNC_18(VAR_15);
  return ((void*)0);
 }

 FUNC_7(VAR_15->sock_name, VAR_17 + 1, "%s/%s", VAR_13, VAR_15->ifname);
 if (FUNC_12(VAR_15->sock_name) >= sizeof(VAR_18.sun_path)) {
  FUNC_18(VAR_15);
  return ((void*)0);
 }

 VAR_15->fd = FUNC_14(VAR_4, VAR_5, 0);
 if (VAR_15->fd < 0) {
  FUNC_17(VAR_2, "socket(PF_UNIX): %s", FUNC_15(VAR_9));
  FUNC_18(VAR_15);
  return ((void*)0);
 }

 FUNC_6(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.sun_family = VAR_0;
 FUNC_11(VAR_18.sun_path, VAR_15->sock_name, sizeof(VAR_18.sun_path));

 if (FUNC_0(VAR_15->fd, (struct sockaddr *) &VAR_18, sizeof(VAR_18)) < 0) {
  FUNC_17(VAR_1, "bind(PF_UNIX) failed: %s",
      FUNC_15(VAR_9));
  if (FUNC_2(VAR_15->fd, (struct sockaddr *) &VAR_18,
       sizeof(VAR_18)) < 0) {
   FUNC_17(VAR_1, "Socket exists, but does not "
       "allow connections - assuming it was "
       "leftover from forced program termination");
   if (FUNC_16(VAR_15->sock_name) < 0) {
    FUNC_17(VAR_2,
        "Could not unlink existing ctrl_iface socket '%s': %s",
        VAR_15->sock_name, FUNC_15(VAR_9));
    goto fail;
   }
   if (FUNC_0(VAR_15->fd, (struct sockaddr *) &VAR_18,
     sizeof(VAR_18)) < 0) {
    FUNC_17(VAR_2,
        "wpa-priv-iface-init: bind(PF_UNIX): %s",
        FUNC_15(VAR_9));
    goto fail;
   }
   FUNC_17(VAR_1, "Successfully replaced leftover "
       "socket '%s'", VAR_15->sock_name);
  } else {
   FUNC_17(VAR_3, "Socket exists and seems to be "
       "in use - cannot override it");
   FUNC_17(VAR_3, "Delete '%s' manually if it is "
       "not used anymore", VAR_15->sock_name);
   goto fail;
  }
 }

 if (FUNC_1(VAR_15->sock_name, VAR_8 | VAR_6 | VAR_7) < 0) {
  FUNC_17(VAR_2, "chmod: %s", FUNC_15(VAR_9));
  goto fail;
 }

 FUNC_4(VAR_15->fd, VAR_11, VAR_15, ((void*)0));

 return VAR_15;

fail:
 FUNC_18(VAR_15);
 return ((void*)0);
}
