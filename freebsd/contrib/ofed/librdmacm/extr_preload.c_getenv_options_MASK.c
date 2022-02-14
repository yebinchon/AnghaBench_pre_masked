
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (char*) ;
 void* VAR_0 ;
 char* FUNC_1 (char*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
 char *VAR_4;

 VAR_4 = FUNC_1("RS_SQ_SIZE");
 if (VAR_4)
  VAR_3 = FUNC_0(VAR_4);

 VAR_4 = FUNC_1("RS_RQ_SIZE");
 if (VAR_4)
  VAR_1 = FUNC_0(VAR_4);

 VAR_4 = FUNC_1("RS_INLINE");
 if (VAR_4)
  VAR_2 = FUNC_0(VAR_4);

 VAR_4 = FUNC_1("RDMAV_FORK_SAFE");
 if (VAR_4)
  VAR_0 = FUNC_0(VAR_4);
}
