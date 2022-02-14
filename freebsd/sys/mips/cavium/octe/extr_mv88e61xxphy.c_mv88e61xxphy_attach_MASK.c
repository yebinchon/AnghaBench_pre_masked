
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct mv88e61xxphy_softc {struct mv88e61xxphy_port_softc* sc_ports; int sc_dev; } ;
struct mv88e61xxphy_port_softc {unsigned int sc_port; unsigned int sc_vlan; scalar_t__ sc_flags; scalar_t__ sc_priority; scalar_t__ sc_domain; struct mv88e61xxphy_softc* sc_switch; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct mv88e61xxphy_port_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 struct mv88e61xxphy_softc* FUNC_3 (int ) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (struct mv88e61xxphy_softc*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_13)
{
 char VAR_14[] = "N";
 struct sysctl_ctx_list *VAR_15 = FUNC_4(VAR_13);
 struct sysctl_oid *VAR_16 = FUNC_5(VAR_13);
 struct sysctl_oid_list *VAR_17 = FUNC_2(VAR_16);
 struct sysctl_oid *VAR_18, *VAR_19;
 struct sysctl_oid_list *VAR_20, *VAR_21;
 struct mv88e61xxphy_softc *VAR_22;
 unsigned VAR_23;

 VAR_22 = FUNC_3(VAR_13);
 VAR_22->sc_dev = VAR_13;




 for (VAR_23 = 0; VAR_23 < VAR_9; VAR_23++) {
  struct mv88e61xxphy_port_softc *VAR_24;

  VAR_24 = &VAR_22->sc_ports[VAR_23];
  VAR_24->sc_switch = VAR_22;
  VAR_24->sc_port = VAR_23;
  VAR_24->sc_domain = 0;
  VAR_24->sc_vlan = VAR_23 + 1;
  VAR_24->sc_priority = 0;
  VAR_24->sc_flags = 0;
 }




 VAR_18 = FUNC_0(VAR_15, VAR_17, VAR_10, "port",
     VAR_0, ((void*)0), "Switch Ports");
 VAR_20 = FUNC_2(VAR_18);
 for (VAR_23 = 0; VAR_23 < VAR_9; VAR_23++) {
  struct mv88e61xxphy_port_softc *VAR_25;

  VAR_25 = &VAR_22->sc_ports[VAR_23];

  VAR_14[0] = '0' + VAR_23;
  VAR_19 = FUNC_0(VAR_15, VAR_20, VAR_10, VAR_14,
      VAR_0, ((void*)0), "Switch Port");
  VAR_21 = FUNC_2(VAR_19);

  FUNC_1(VAR_15, VAR_21, VAR_10, "duplex",
      VAR_0 | VAR_2, VAR_25,
      VAR_3,
      VAR_11, "IU",
      "Media duplex status (0 = half duplex; 1 = full duplex)");

  FUNC_1(VAR_15, VAR_21, VAR_10, "link",
      VAR_0 | VAR_2, VAR_25,
      VAR_4,
      VAR_11, "IU",
      "Link status (0 = down; 1 = up)");

  FUNC_1(VAR_15, VAR_21, VAR_10, "media",
      VAR_0 | VAR_2, VAR_25,
      VAR_5,
      VAR_11, "IU",
      "Media speed (0 = unknown; 10 = 10Mbps; 100 = 100Mbps; 1000 = 1Gbps)");

  FUNC_1(VAR_15, VAR_21, VAR_10, "domain",
      VAR_1 | VAR_2, VAR_25,
      VAR_6,
      VAR_12, "IU",
      "Broadcast domain (ports can only talk to other ports in the same domain)");

  FUNC_1(VAR_15, VAR_21, VAR_10, "vlan",
      VAR_1 | VAR_2, VAR_25,
      VAR_8,
      VAR_12, "IU",
      "Tag packets from/for this port with a given VLAN.");

  FUNC_1(VAR_15, VAR_21, VAR_10, "priority",
      VAR_1 | VAR_2, VAR_25,
      VAR_7,
      VAR_12, "IU",
      "Default packet priority for this port.");
 }

 FUNC_6(VAR_22);

 return (0);
}
