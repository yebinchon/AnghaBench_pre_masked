
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sftp_conn {scalar_t__ version; int msg_id; } ;
typedef int Attrib ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct sftp_conn*,scalar_t__,int) ;
 int FUNC_1 (struct sftp_conn*,scalar_t__,int ,char const*,int ) ;
 int FUNC_2 (char const*) ;

Attrib *
FUNC_3(struct sftp_conn *VAR_2, const char *VAR_3, int VAR_4)
{
 u_int VAR_5;

 VAR_5 = VAR_2->msg_id++;

 FUNC_1(VAR_2, VAR_5,
     VAR_2->version == 0 ? VAR_1 : VAR_0,
     VAR_3, FUNC_2(VAR_3));

 return(FUNC_0(VAR_2, VAR_5, VAR_4));
}
