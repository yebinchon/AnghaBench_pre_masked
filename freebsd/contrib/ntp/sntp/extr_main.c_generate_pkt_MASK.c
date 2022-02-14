
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct pkt {int ppoll; int * exten; int stratum; int xmt; } ;
struct key {int dummy; } ;
typedef int l_fp ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct timeval const*,int *) ;
 int FUNC_3 (struct pkt) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct pkt*,int,int ,struct key*,char*) ;
 int VAR_6 ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (struct pkt*,int ,int ,int) ;

int
FUNC_8 (
 struct pkt *VAR_7,
 const struct timeval *VAR_8,
 int VAR_9,
 struct key *VAR_10
 )
{
 l_fp VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_12 = VAR_2;
 FUNC_3(*VAR_7);
 FUNC_2(VAR_8, &VAR_11);
 FUNC_0(&VAR_11, &VAR_7->xmt);
 VAR_7->stratum = FUNC_1(VAR_4);
 VAR_7->ppoll = 8;

 FUNC_7(VAR_7, VAR_1, VAR_6, 3);
 if (VAR_5 > 0) {
  FUNC_6("generate_pkt: key_id %d, key pointer %p\n", VAR_9, VAR_10);
 }
 if (VAR_10 != ((void*)0)) {
  VAR_7->exten[0] = FUNC_4(VAR_9);
  VAR_13 = FUNC_5(VAR_7, VAR_12, VAR_3,
        VAR_10, (char *)&VAR_7->exten[1]);
  if (VAR_13 > 0)
   VAR_12 += VAR_13 + VAR_0;






 }
 return VAR_12;
}
