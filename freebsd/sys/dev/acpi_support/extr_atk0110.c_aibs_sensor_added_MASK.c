
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int sysctl_name ;
struct sysctl_oid {int dummy; } ;
struct aibs_softc {scalar_t__ sc_ggrp_method; int sc_dev; } ;
struct aibs_sensor {scalar_t__ t; scalar_t__ h; scalar_t__ l; scalar_t__ i; } ;
typedef int intmax_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*,int,struct aibs_softc*,uintptr_t,int ,char*,char const*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const,int,int ,char const*,int ,int ) ;
 int FUNC_4 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct aibs_softc *VAR_5, struct sysctl_oid *VAR_6,
    const char *VAR_7, int VAR_8, struct aibs_sensor *VAR_9,
    const char *VAR_10)
{
 char VAR_11[8];

 FUNC_4(VAR_11, sizeof(VAR_11), "%i", VAR_8);






 FUNC_0(FUNC_2(VAR_5->sc_dev),
     FUNC_1(VAR_6), VAR_8, VAR_11,
     VAR_2 | VAR_1, VAR_5, (uintptr_t)VAR_9,
     VAR_5->sc_ggrp_method ? VAR_4 : VAR_3,
     VAR_9->t == VAR_0 ? "IK" : "I", VAR_10);
}
