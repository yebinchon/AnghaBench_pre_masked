
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bpf_u_int32 ;
typedef int DWORD ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (char*,int ,char*,int) ;
 int FUNC_6 (char*,char*) ;

int FUNC_7 (const char *VAR_7, bpf_u_int32 *VAR_8,
                    bpf_u_int32 *VAR_9, char *VAR_10)
{
  DWORD VAR_11, VAR_12;

  if (!VAR_5)
  {
    FUNC_6 (VAR_10, "pcap_open_offline() or pcap_activate() must be "
                    "called first");
    return (-1);
  }

  VAR_11 = VAR_4;
  VAR_12 = VAR_6 & VAR_11;
  if (VAR_12 == 0)
  {
    if (FUNC_1(*VAR_9))
       VAR_12 = VAR_0;
    else if (FUNC_2(*VAR_9))
       VAR_12 = VAR_1;
    else if (FUNC_3(*VAR_9))
       VAR_12 = VAR_2;
    else
    {
      FUNC_5 (VAR_10, VAR_3, "inet class for 0x%lx unknown", VAR_11);
      return (-1);
    }
  }
  *VAR_8 = FUNC_4 (VAR_12);
  *VAR_9 = FUNC_4 (VAR_11);

  FUNC_0 (VAR_7);
  return (0);
}
