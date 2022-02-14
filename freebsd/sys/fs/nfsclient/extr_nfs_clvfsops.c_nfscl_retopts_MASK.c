
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmount {int nm_flag; scalar_t__ nm_minorvers; scalar_t__ nm_sotype; scalar_t__ nm_acdirmin; scalar_t__ nm_acdirmax; scalar_t__ nm_acregmin; scalar_t__ nm_acregmax; scalar_t__ nm_nametimeo; scalar_t__ nm_negnametimeo; scalar_t__ nm_rsize; scalar_t__ nm_wsize; scalar_t__ nm_readdirsize; scalar_t__ nm_readahead; scalar_t__ nm_wcommitsize; scalar_t__ nm_timeo; scalar_t__ nm_retry; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct nfsmount*,int,char*,char**,size_t*) ;
 int FUNC_1 (struct nfsmount*,scalar_t__,char*,char**,size_t*) ;

void FUNC_2(struct nfsmount *VAR_16, char *VAR_17, size_t VAR_18)
{
 char *VAR_19;
 size_t VAR_20;

 VAR_19 = VAR_17;
 VAR_20 = VAR_18;
 FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_4) != 0, "nfsv4", &VAR_19,
     &VAR_20);
 if ((VAR_16->nm_flag & VAR_4) != 0) {
  FUNC_1(VAR_16, VAR_16->nm_minorvers, ",minorversion", &VAR_19,
      &VAR_20);
  FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_10) != 0, ",pnfs",
      &VAR_19, &VAR_20);
  FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_9) != 0 &&
      VAR_16->nm_minorvers > 0, ",oneopenown", &VAR_19, &VAR_20);
 }
 FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_3) != 0, "nfsv3", &VAR_19,
     &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & (VAR_3 | VAR_4)) == 0,
     "nfsv2", &VAR_19, &VAR_20);
 FUNC_0(VAR_16, VAR_16->nm_sotype == VAR_15, ",tcp", &VAR_19, &VAR_20);
 FUNC_0(VAR_16, VAR_16->nm_sotype != VAR_15, ",udp", &VAR_19, &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_13) != 0, ",resvport",
     &VAR_19, &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_5) != 0, ",noconn",
     &VAR_19, &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_14) == 0, ",hard", &VAR_19,
     &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_14) != 0, ",soft", &VAR_19,
     &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_0) != 0, ",intr", &VAR_19,
     &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_6) == 0, ",cto", &VAR_19,
     &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_6) != 0, ",nocto", &VAR_19,
     &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_8) != 0,
     ",noncontigwr", &VAR_19, &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & (VAR_7 | VAR_4)) ==
     0, ",lockd", &VAR_19, &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & (VAR_7 | VAR_4)) ==
     VAR_7, ",nolockd", &VAR_19, &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_12) != 0, ",rdirplus",
     &VAR_19, &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & VAR_2) == 0, ",sec=sys",
     &VAR_19, &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & (VAR_2 | VAR_1 |
     VAR_11)) == VAR_2, ",sec=krb5", &VAR_19, &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & (VAR_2 | VAR_1 |
     VAR_11)) == (VAR_2 | VAR_1), ",sec=krb5i",
     &VAR_19, &VAR_20);
 FUNC_0(VAR_16, (VAR_16->nm_flag & (VAR_2 | VAR_1 |
     VAR_11)) == (VAR_2 | VAR_11), ",sec=krb5p",
     &VAR_19, &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_acdirmin, ",acdirmin", &VAR_19, &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_acdirmax, ",acdirmax", &VAR_19, &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_acregmin, ",acregmin", &VAR_19, &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_acregmax, ",acregmax", &VAR_19, &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_nametimeo, ",nametimeo", &VAR_19, &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_negnametimeo, ",negnametimeo", &VAR_19,
     &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_rsize, ",rsize", &VAR_19, &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_wsize, ",wsize", &VAR_19, &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_readdirsize, ",readdirsize", &VAR_19,
     &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_readahead, ",readahead", &VAR_19, &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_wcommitsize, ",wcommitsize", &VAR_19,
     &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_timeo, ",timeout", &VAR_19, &VAR_20);
 FUNC_1(VAR_16, VAR_16->nm_retry, ",retrans", &VAR_19, &VAR_20);
}
