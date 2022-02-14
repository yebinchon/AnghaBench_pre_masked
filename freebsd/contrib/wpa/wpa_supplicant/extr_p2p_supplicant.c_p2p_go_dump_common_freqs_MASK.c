
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {unsigned int p2p_group_common_freqs_num; int * p2p_group_common_freqs; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*,char*) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_2)
{
 char VAR_3[20 + VAR_1 * 6];
 char *VAR_4, *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_4 = VAR_3;
 VAR_5 = VAR_4 + sizeof(VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_2->p2p_group_common_freqs_num; VAR_6++) {
  VAR_7 = FUNC_0(VAR_4, VAR_5 - VAR_4, " %d",
      VAR_2->p2p_group_common_freqs[VAR_6]);
  if (FUNC_1(VAR_5 - VAR_4, VAR_7))
   break;
  VAR_4 += VAR_7;
 }
 *VAR_4 = '\0';

 FUNC_2(VAR_2, VAR_0, "P2P: Common group frequencies:%s", VAR_3);
}
