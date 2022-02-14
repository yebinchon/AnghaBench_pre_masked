
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_bootstrap_info {scalar_t__ num_freq; int* freq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3(struct dpp_bootstrap_info *VAR_2,
       const char *VAR_3)
{
 const char *VAR_4 = VAR_3, *VAR_5;
 int VAR_6 = -1, VAR_7, VAR_8;

 while (VAR_4 && *VAR_4 && *VAR_4 != ';') {
  VAR_5 = VAR_4;
  while (*VAR_5 >= '0' && *VAR_5 <= '9')
   VAR_5++;
  if (*VAR_5 == '/') {
   VAR_6 = FUNC_0(VAR_4);
   VAR_4 = VAR_5 + 1;
  }
  if (VAR_6 <= 0)
   goto fail;
  VAR_7 = FUNC_0(VAR_4);
  if (VAR_7 <= 0)
   goto fail;
  while (*VAR_4 >= '0' && *VAR_4 <= '9')
   VAR_4++;
  VAR_8 = FUNC_1(((void*)0), VAR_6, VAR_7);
  FUNC_2(VAR_1,
      "DPP: URI channel-list: opclass=%d channel=%d ==> freq=%d",
      VAR_6, VAR_7, VAR_8);
  if (VAR_8 < 0) {
   FUNC_2(VAR_1,
       "DPP: Ignore unknown URI channel-list channel (opclass=%d channel=%d)",
       VAR_6, VAR_7);
  } else if (VAR_2->num_freq == VAR_0) {
   FUNC_2(VAR_1,
       "DPP: Too many channels in URI channel-list - ignore list");
   VAR_2->num_freq = 0;
   break;
  } else {
   VAR_2->freq[VAR_2->num_freq++] = VAR_8;
  }

  if (*VAR_4 == ';' || *VAR_4 == '\0')
   break;
  if (*VAR_4 != ',')
   goto fail;
  VAR_4++;
 }

 return 0;
fail:
 FUNC_2(VAR_1, "DPP: Invalid URI channel-list");
 return -1;
}
