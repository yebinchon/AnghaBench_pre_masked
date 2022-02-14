
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sip_header {char* search; unsigned int (* match_len ) (struct nf_conn const*,char const*,char const*,int*) ;int slen; } ;
struct nf_conn {int dummy; } ;
typedef enum sip_header_types { ____Placeholder_sip_header_types } sip_header_types ;


 struct sip_header* VAR_0 ;
 char* FUNC_0 (char const*,char const*,char*,int ) ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (struct nf_conn const*,char const*,char const*,int*) ;

__attribute__((used)) static int FUNC_3(const struct nf_conn *VAR_1, const char *VAR_2,
         unsigned int VAR_3, unsigned int VAR_4,
         enum sip_header_types VAR_5,
         unsigned int *VAR_6, unsigned int *VAR_7)
{
 const struct sip_header *VAR_8 = &VAR_0[VAR_5];
 const char *VAR_9 = VAR_2, *VAR_10 = VAR_2 + VAR_4;
 int VAR_11 = 0;

 VAR_2 += VAR_3;

 VAR_2 = FUNC_0(VAR_2, VAR_10, ",", FUNC_1(","));
 if (!VAR_2)
  return 0;

 VAR_2 = FUNC_0(VAR_2, VAR_10, VAR_8->search, VAR_8->slen);
 if (!VAR_2)
  return 0;
 VAR_2 += VAR_8->slen;

 *VAR_6 = VAR_2 - VAR_9;
 *VAR_7 = VAR_8->match_len(VAR_1, VAR_2, VAR_10, &VAR_11);
 if (!*VAR_7)
  return -1;
 *VAR_6 += VAR_11;
 return 1;
}
