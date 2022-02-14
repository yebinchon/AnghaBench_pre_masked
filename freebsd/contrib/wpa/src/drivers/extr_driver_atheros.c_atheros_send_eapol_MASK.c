
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct l2_ethhdr {int h_proto; struct l2_ethhdr* h_source; struct l2_ethhdr* h_dest; } ;
struct atheros_driver_data {int sock_xmit; } ;
typedef int buf ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*,int ,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (size_t) ;
 int FUNC_4 (struct l2_ethhdr*,int const*,size_t) ;
 int FUNC_5 (int ,char*,unsigned char*,size_t) ;
 int FUNC_6 (int ,char*,unsigned long) ;

__attribute__((used)) static int
FUNC_7(void *VAR_4, const u8 *VAR_5, const u8 *VAR_6, size_t VAR_7,
     int VAR_8, const u8 *VAR_9, u32 VAR_10)
{
 struct atheros_driver_data *VAR_11 = VAR_4;
 unsigned char VAR_12[3000];
 unsigned char *VAR_13 = VAR_12;
 struct l2_ethhdr *VAR_14;
 size_t VAR_15;
 int VAR_16;







 VAR_15 = VAR_7 + sizeof(struct l2_ethhdr);
 if (VAR_15 > sizeof(VAR_12)) {
  VAR_13 = FUNC_3(VAR_15);
  if (VAR_13 == ((void*)0)) {
   FUNC_6(VAR_2,
       "EAPOL frame discarded, cannot malloc temp buffer of size %lu!",
       (unsigned long) VAR_15);
   return -1;
  }
 }
 VAR_14 = (struct l2_ethhdr *) VAR_13;
 FUNC_4(VAR_14->h_dest, VAR_5, VAR_0);
 FUNC_4(VAR_14->h_source, VAR_9, VAR_0);
 VAR_14->h_proto = FUNC_0(VAR_1);
 FUNC_4(VAR_14 + 1, VAR_6, VAR_7);

 FUNC_5(VAR_3, "TX EAPOL", VAR_13, VAR_15);

 VAR_16 = FUNC_1(VAR_11->sock_xmit, VAR_5, VAR_1, VAR_13, VAR_15);

 if (VAR_13 != VAR_12)
  FUNC_2(VAR_13);
 return VAR_16;
}
