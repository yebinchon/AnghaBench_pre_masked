
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; } ;
struct sockaddr_in6 {size_t sin6_flowinfo; size_t sin6_scope_id; int sin6_addr; int sin6_port; } ;
struct sockaddr_in {int sin_addr; int sin_port; } ;
struct sockaddr_dl {size_t sdl_slen; size_t sdl_nlen; size_t sdl_alen; size_t sdl_index; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
typedef int pbuf ;
typedef int nbuf ;
typedef int abuf ;


 int FUNC_0 (char const) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,struct sockaddr_dl const*) ;
 int FUNC_5 (char*,int,struct sockaddr_in const*) ;
 int FUNC_6 (char*,int,struct sockaddr_in6 const*) ;
 int FUNC_7 (char*,int,struct sockaddr_un const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (struct sockaddr const* const,int ,char*,unsigned int,char*,unsigned int,int) ;
 int FUNC_9 (struct sockaddr_dl const*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int,char*,size_t) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (char*,int ,int) ;

int
FUNC_14(char * const VAR_4, const size_t VAR_5, const char * const VAR_6,
    const struct sockaddr * const VAR_7)
{
 const void *VAR_8 = ((void*)0);
 char VAR_9[1024], VAR_10[1024], *VAR_11 = ((void*)0);
 char VAR_12[1024], VAR_13[32], *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 char *VAR_16 = &VAR_4[VAR_5 - 1], *VAR_17 = VAR_4;
 const char *VAR_18, *VAR_19;
 size_t VAR_20;
 int VAR_21 = -1;
 const struct sockaddr_in *VAR_22 = ((void*)0);
 const struct sockaddr_in6 *VAR_23 = ((void*)0);
 const struct sockaddr_un *VAR_24 = ((void*)0);




 int VAR_25 = 1;
 switch (VAR_7->sa_family) {
 case 128:
  goto done;
 case 129:
  VAR_20 = sizeof(*VAR_24);
  VAR_24 = ((const struct sockaddr_un *)(const void *)VAR_7);
  (void)FUNC_13(VAR_11 = VAR_9, VAR_24->sun_path, sizeof(VAR_9));
  break;
 case 132:
  VAR_20 = sizeof(*VAR_22);
  VAR_22 = ((const struct sockaddr_in *)(const void *)VAR_7);
  VAR_21 = FUNC_10(VAR_22->sin_port);
  VAR_8 = &VAR_22->sin_addr;
  break;
 case 131:
  VAR_20 = sizeof(*VAR_23);
  VAR_23 = ((const struct sockaddr_in6 *)(const void *)VAR_7);
  VAR_21 = FUNC_10(VAR_23->sin6_port);
  VAR_8 = &VAR_23->sin6_addr;
  break;
 default:
  VAR_3 = VAR_0;
  return -1;
 }

 if (VAR_11 == VAR_9)
  VAR_14 = VAR_11;

 if (VAR_8 && FUNC_8(VAR_7, (socklen_t)VAR_20, VAR_11 = VAR_9,
     (unsigned int)sizeof(VAR_9), ((void*)0), 0,
     VAR_1|VAR_2) != 0)
  return -1;

 for (VAR_18 = VAR_6; *VAR_18; VAR_18++) {
  if (*VAR_18 != '%') {
   do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_18; else VAR_17++; } while ( 0);
   continue;
  }
   next_char:
  switch (*++VAR_18) {
  case '?':
   VAR_25 = 0;
   goto next_char;
  case 'a':
   do { for (VAR_19 = VAR_11; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0);
   break;
  case 'p':
   if (VAR_21 != -1) {
    (void)FUNC_11(VAR_10, sizeof(VAR_10), "%d", VAR_21);
    do { for (VAR_19 = VAR_10; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0);
   } else
    do { if (VAR_25) do { for (VAR_19 = "N/A"; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0); } while ( 0);
   break;
  case 'f':
   (void)FUNC_11(VAR_10, sizeof(VAR_10), "%d", VAR_7->sa_family);
   do { for (VAR_19 = VAR_10; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0);
   break;
  case 'l':
   (void)FUNC_11(VAR_10, sizeof(VAR_10), "%zu", VAR_20);
   do { for (VAR_19 = VAR_10; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0);
   break;
  case 'A':
   if (VAR_14)
    do { for (VAR_19 = VAR_14; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0);
   else if (!VAR_8)
    do { if (VAR_25) do { for (VAR_19 = "N/A"; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0); } while ( 0);
   else {
    FUNC_8(VAR_7, (socklen_t)VAR_20, VAR_14 = VAR_12,
     (unsigned int)sizeof(VAR_10), ((void*)0), 0, 0);
    do { for (VAR_19 = VAR_14; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0);
   }
   break;
  case 'P':
   if (VAR_15)
    do { for (VAR_19 = VAR_15; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0);
   else if (VAR_21 == -1)
    do { if (VAR_25) do { for (VAR_19 = "N/A"; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0); } while ( 0);
   else {
    FUNC_8(VAR_7, (socklen_t)VAR_20, ((void*)0), 0,
     VAR_15 = VAR_13,
     (unsigned int)sizeof(VAR_13), 0);
    do { for (VAR_19 = VAR_15; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0);
   }
   break;
  case 'I':





   {
    do { if (VAR_25) do { for (VAR_19 = "N/A"; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0); } while ( 0);
   }
   break;
  case 'F':
   if (VAR_23) {
    (void)FUNC_11(VAR_10, sizeof(VAR_10), "%d",
        VAR_23->sin6_flowinfo);
    do { for (VAR_19 = VAR_10; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0);
    break;
   } else {
    do { if (VAR_25) do { for (VAR_19 = "N/A"; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0); } while ( 0);
   }
   break;
  case 'S':
   if (VAR_23) {
    (void)FUNC_11(VAR_10, sizeof(VAR_10), "%d",
        VAR_23->sin6_scope_id);
    do { for (VAR_19 = VAR_10; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0);
    break;
   } else {
    do { if (VAR_25) do { for (VAR_19 = "N/A"; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0); } while ( 0);
   }
   break;
  case 'R':
   {
    do { if (VAR_25) do { for (VAR_19 = "N/A"; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0); } while ( 0);
   }
   break;
  case 'D':
   switch (VAR_7->sa_family) {
   case 129:
    FUNC_7(VAR_10, sizeof(VAR_10), VAR_24);
    break;
   case 132:
    FUNC_5(VAR_10, sizeof(VAR_10), VAR_22);
    break;
   case 131:
    FUNC_6(VAR_10, sizeof(VAR_10), VAR_23);
    break;





   default:
    FUNC_3();
   }
   do { for (VAR_19 = VAR_10; *VAR_19; VAR_19++) do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_19; else VAR_17++; } while ( 0); } while ( 0);
   break;
  default:
   do { if (VAR_17 < VAR_16) *VAR_17++ = '%'; else VAR_17++; } while ( 0);
   if (VAR_25 == 0)
    do { if (VAR_17 < VAR_16) *VAR_17++ = '?'; else VAR_17++; } while ( 0);
   if (*VAR_18 == '\0')
    goto done;

  case '%':
   do { if (VAR_17 < VAR_16) *VAR_17++ = *VAR_18; else VAR_17++; } while ( 0);
   break;
  }
  VAR_25 = 1;
 }
done:
 if (VAR_17 < VAR_16)
  *VAR_17 = '\0';
 else if (VAR_5 != 0)
  VAR_4[VAR_5 - 1] = '\0';
 return (int)(VAR_17 - VAR_4);
}
